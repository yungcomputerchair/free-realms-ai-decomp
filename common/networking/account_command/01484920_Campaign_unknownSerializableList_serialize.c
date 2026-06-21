// addr: 0x01484920
// name: Campaign_unknownSerializableList_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Campaign_unknownSerializableList_serialize(void * this, int vector) */

int __thiscall Campaign_unknownSerializableList_serialize(void *this,int vector)

{
  int *piVar1;
  bool bVar2;
  int serializer;
  uint3 extraout_var;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  
                    /* Serializes an unlabeled Campaign member that is a vector of serializable
                       object pointers. */
  iVar3 = vector;
  if (*(int *)(vector + 4) == 0) {
    serializer = 0;
  }
  else {
    serializer = *(int *)(vector + 8) - *(int *)(vector + 4) >> 2;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,serializer,unaff_EDI);
  piVar1 = *(int **)(iVar3 + 8);
  if (piVar1 < *(int **)(iVar3 + 4)) {
    FUN_00d83c2d();
  }
  piVar4 = *(int **)(iVar3 + 4);
  if (*(int **)(iVar3 + 8) < piVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar3 + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    vector = *piVar4;
    bVar2 = SerializeVirtualObjectPtrElement(*(void **)this,(void **)&vector);
    if (!bVar2) {
      return (uint)extraout_var << 8;
    }
    if (*(int **)(iVar3 + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  iVar3 = Serialize_returnTrue();
  return iVar3;
}

