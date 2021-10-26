#include <stdio.h>
     
    int main()
    {
        int quantidadeProd;
        float valorUnitario;
        int totalProd = 0;
        float totalUnitario;
        float totalUnitarioTodos;

		while(quantidadeProd != -1){
			valorUnitario = 0;
            totalUnitario = 0;
            scanf("%d", &quantidadeProd);
			if(quantidadeProd != -1){
				scanf("%f", &valorUnitario);
	            totalProd = totalProd + quantidadeProd;
	            totalUnitario = quantidadeProd * valorUnitario;
	            totalUnitarioTodos = totalUnitarioTodos + totalUnitario;
				
			}
            
		}
       
     
     
        printf("%d %.2f", totalProd, totalUnitarioTodos);
    }