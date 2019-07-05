#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;

void print_all_packages(town t) {
    printf("%s:\n", t.name);
    for (int i=0 ; i<t.offices_count ; i++) {
        printf("\t%d:\n", i);
        for (int j=0 ; j<t.offices[i].packages_count ; j++) {
            printf("\t\t%s\n", t.offices[i].packages[j].id);
        }
    }
}

void send_all_acceptable_packages(town* source, int si, town* target, int ti) {

    package* temp = (package*)malloc(sizeof(package)*((source->offices[si]).packages_count));

    int transferablePackage=0, packageWeight, maxWeight, minWeight;
    int oldPacakgeCount = target->offices[ti].packages_count;
    for (int i=0, randCounter=0 ; i<source->offices[si].packages_count ; i++) {
        packageWeight = source->offices[si].packages[i].weight;
        maxWeight = target->offices[ti].max_weight;
        minWeight = target->offices[ti].min_weight;
        if (packageWeight <= maxWeight && packageWeight >= minWeight) {
            temp[randCounter++] = source->offices[si].packages[i];
            transferablePackage++;
        }
    }
    if (transferablePackage == 0) {
        free(temp);
        return;
    }

    target->offices[ti].packages_count += transferablePackage;
    target->offices[ti].packages = (package*)realloc(target->offices[ti].packages, sizeof(package)*target->offices[ti].packages_count);

    for (int i = oldPacakgeCount, randCounter=0 ; i < (target->offices[ti]).packages_count ; i++, randCounter++) {
        target->offices[ti].packages[i].id = temp[randCounter].id;
        target->offices[ti].packages[i].weight = temp[randCounter].weight;
    }

    // reallocate memory from old post office after the transfer
    source->offices[si].packages_count -= transferablePackage;
    if (source->offices[si].packages_count != 0) {
        source->offices[si].packages = (package*)realloc(source->offices[si].packages, sizeof(package)*source->offices[si].packages_count);
    }

    free(temp);

}

town town_with_most_packages(town* towns, int towns_count) {
    int townIndex = 0, maxPackage=0;
    for (int i=0 ; i<towns_count ; i++) {
        int sum=0;
        for (int j=0 ; j<towns[i].offices_count ; j++) {
            sum += towns[i].offices[j].packages_count;
        }
        if (sum > maxPackage) {
            townIndex = i;
            maxPackage = sum;
        }
    }
    return towns[townIndex];
}

town* find_town(town* towns, int towns_count, char* name) {
    int i=0;
    for (i=0 ; i<towns_count ; i++) {
        if (strcmp(name, towns[i].name) == 0) {
            break;
        }
    }
    return &towns[i];
}

int main()
{
	int towns_count;
	scanf("%d", &towns_count);
	town* towns = malloc(sizeof(town)*towns_count);
	for (int i = 0; i < towns_count; i++) {
		towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
		scanf("%s", towns[i].name);
		scanf("%d", &towns[i].offices_count);
		towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);
		for (int j = 0; j < towns[i].offices_count; j++) {
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
			towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);
			for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
				towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
				scanf("%s", towns[i].offices[j].packages[k].id);
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
		int type;
		scanf("%d", &type);
		switch (type) {
		case 1:
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
			scanf("%d", &source_index);
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
			break;
		}
	}

    for (int i = 0; i < towns_count; i++) {
        for (int j = 0; j < towns[i].offices_count; j++) {
            for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
                free(towns[i].offices[j].packages[k].id);
            }
            free(towns[i].offices[j].packages);
        }
        free(towns[i].offices);
        free(towns[i].name);
    }
    free(towns);

	return 0;
}

