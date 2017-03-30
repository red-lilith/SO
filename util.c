int filesize(char *f_name) {
  int count = 0;
  FILE *fp;
  fp = fopen(f_name,"r");
  if (fp == NULL) {
    perror("filesize - No se pudo abrir archivo\n");
    return -1;
  }
  while (fgetc(fp) != EOF) {
    count++;
  }
  fclose(fp);
  return count;
}
