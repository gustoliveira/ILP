int inserir_lista(fila *f, int pos, no *x){
	if(f->inicio == NULL){
		push_fila(f, x);
		f->cont++;
		//printf("primeiro if\n");
		return 1;
	}

	if(f->inicio != NULL && pos == 1){
		x->prox = f->inicio;
		f->inicio = x;
		f->cont++;
		//printf("segundo if\n");
		return 1;
	}
	else if(f->inicio != NULL && pos != 1){
		int i = 1;
		no *aux = f->inicio;
		while(i != pos+1 && aux->prox != NULL){
			aux = aux->prox;
			i++;
		}
		no *aux1 = aux->prox; //Inicio imaginário
		no *aux2 = f->fim; //Fim antigo
		push_fila(f, x);

		f->fim = aux2;
		x->prox = aux1;

		aux1 = NULL;
		aux2 = NULL;

		f->cont++;
		//printf("terceiro if\n");
		return 1;
	}
	return 0;
}



	else if(f->inicio != NULL && pos != 1){
		int i = 1;
		no *aux = f->inicio;
		while(i != pos+1 && aux->prox != NULL){
			aux = aux->prox;
			i++;
		}
		fila *f1;
		//printf("DEBUG\n");
		f1->inicio = f->inicio;
		f1->fim = aux;
		aux = aux->prox;
		// no *aux2 = aux;
		push_fila(f1, x);

		x->prox = aux;

		// f1->inicio = NULL;
		// f1->fim = NULL;
		// aux = NULL;


		//printf("terceiro if\n");
		f->cont++;
		return 1;
