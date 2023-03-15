#include <stdio.h>

int main() {
    int num_passengers;
    double gas_cost, total_cost, cost_per_person = 0; // initialize to 0

    scanf("%d", &num_passengers);

    scanf("%lf", &gas_cost);

    if (num_passengers == 0) {
        total_cost = gas_cost;
        cost_per_person = total_cost / num_passengers;
        total_cost = cost_per_person * num_passengers;
    } else {
        total_cost = gas_cost + 1;
        cost_per_person = total_cost / (num_passengers + 1);

        total_cost = cost_per_person * (num_passengers + 1);
    }

    printf("%.2lf\n", cost_per_person);

    return 0;
}
