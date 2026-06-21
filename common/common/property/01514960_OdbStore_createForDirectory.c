// addr: 0x01514960
// name: OdbStore_createForDirectory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OdbStore_createForDirectory(char * directory) */

void * __fastcall OdbStore_createForDirectory(char *directory)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an ODB store/context, normalizes a directory path by trimming
                       trailing slashes, builds /objects, /index, and /.clean filenames, and
                       constructs an internal helper object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = _calloc(1,0x44);
  pcVar3 = __strdup(directory);
  *puVar2 = pcVar3;
  pcVar4 = directory;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  cVar1 = pcVar3[(int)(pcVar4 + (-1 - (int)(directory + 1)))];
  while (cVar1 == '/') {
    pcVar4 = directory;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar3[(int)(pcVar4 + (-1 - (int)(directory + 1)))] = '\0';
    pcVar4 = directory;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = pcVar3[(int)(pcVar4 + (-1 - (int)(directory + 1)))];
  }
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = _malloc((size_t)(pcVar4 + (10 - (int)(pcVar3 + 1))));
  puVar2[1] = pcVar5;
  pcVar4 = pcVar3;
  pcVar8 = pcVar5;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar5 + -1;
  do {
    pcVar8 = pcVar4;
    pcVar4 = pcVar8 + 1;
  } while (pcVar8[1] != '\0');
  *(undefined4 *)(pcVar8 + 1) = s__objects_01910da4._0_4_;
  *(undefined4 *)(pcVar8 + 5) = s__objects_01910da4._4_4_;
  pcVar8[9] = s__objects_01910da4[8];
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = _malloc((size_t)(pcVar4 + (8 - (int)(pcVar3 + 1))));
  puVar2[2] = pcVar5;
  pcVar4 = pcVar3;
  pcVar8 = pcVar5;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar5 + -1;
  do {
    pcVar8 = pcVar4;
    pcVar4 = pcVar8 + 1;
  } while (pcVar8[1] != '\0');
  *(undefined4 *)(pcVar8 + 1) = s__index_01910d9c._0_4_;
  *(undefined2 *)(pcVar8 + 5) = s__index_01910d9c._4_2_;
  pcVar8[7] = s__index_01910d9c[6];
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar8 = _malloc((size_t)(pcVar4 + (9 - (int)(pcVar3 + 1))));
  puVar2[3] = pcVar8;
  pcVar4 = pcVar8;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar8 + -1;
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  *(undefined4 *)(pcVar3 + 1) = s___clean_01910d94._0_4_;
  *(undefined4 *)(pcVar3 + 5) = s___clean_01910d94._4_4_;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  pvVar6 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = OdbStorePath_ctor();
  }
  puVar2[8] = uVar7;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  ExceptionList = local_c;
  return puVar2;
}

