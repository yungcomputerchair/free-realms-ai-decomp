// addr: 0x01400c10
// name: STLVector_intSerializablePair_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_intSerializablePair_serialize(void * this, int vector) */

int __thiscall STLVector_intSerializablePair_serialize(void *this,int vector)

{
  uint *puVar1;
  void *this_00;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint3 extraout_var;
  uint3 uVar5;
  uint *puVar6;
  int unaff_EDI;
  
                    /* Serializes a vector of pairs containing an integer and a serializable object
                       pointer. */
  if (*(int *)(vector + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(vector + 8) - *(int *)(vector + 4) >> 3;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar4,unaff_EDI);
  puVar1 = *(uint **)(vector + 8);
  if (puVar1 < *(uint **)(vector + 4)) {
    FUN_00d83c2d();
  }
  puVar6 = *(uint **)(vector + 4);
  if (*(uint **)(vector + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) {
      iVar4 = Serialize_returnTrue();
      return iVar4;
    }
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (*(uint **)(vector + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    this_00 = *(void **)this;
    piVar2 = (int *)puVar6[1];
    bVar3 = Serializer_appendInteger(this_00,*puVar6);
    uVar5 = extraout_var;
    if (!bVar3) break;
    iVar4 = (**(code **)(*piVar2 + 0x28))(this_00);
    uVar5 = (uint3)((uint)iVar4 >> 8);
    if (iVar4 == 0) break;
    if (*(uint **)(vector + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 2;
  }
  return (uint)uVar5 << 8;
}

