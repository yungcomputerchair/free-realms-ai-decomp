// addr: 0x01536710
// name: OdbFile_RecordTree_lowerBound
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbFile_RecordTree_lowerBound(void * tree, void * outIt, int * recordKey)
    */

void __thiscall OdbFile_RecordTree_lowerBound(void *this,void *tree,void *outIt,int *recordKey)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Performs lower_bound over an OdbFile record tree using an integer record key
                       and writes the iterator result. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x19) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *(int *)outIt) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        local_c = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  local_10 = this;
  if ((local_c == *(undefined4 **)((int)this + 4)) || (*(int *)outIt < (int)local_c[3])) {
    local_8 = this;
    local_4 = *(undefined4 **)((int)this + 4);
    ppvVar4 = &local_8;
  }
  else {
    ppvVar4 = &local_10;
  }
  pvVar1 = ppvVar4[1];
  *(void **)tree = *ppvVar4;
  *(void **)((int)tree + 4) = pvVar1;
  return;
}

