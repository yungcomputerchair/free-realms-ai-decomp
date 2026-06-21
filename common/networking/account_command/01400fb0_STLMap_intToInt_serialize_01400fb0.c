// addr: 0x01400fb0
// name: STLMap_intToInt_serialize_01400fb0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToInt_serialize_01400fb0(int map) */

int __thiscall STLMap_intToInt_serialize_01400fb0(void *this,int map)

{
  int *piVar1;
  int *piVar2;
  uint value;
  void *this_00;
  bool bVar3;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 uVar5;
  int iVar4;
  int unaff_EDI;
  
                    /* Serializes a map-like container of integer key/value pairs, writing count and
                       two dwords per node. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)(map + 8),unaff_EDI);
  piVar1 = *(int **)(map + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (map == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar4 = Serialize_returnTrue();
      return iVar4;
    }
    if (map == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(map + 4)) {
      FUN_00d83c2d();
    }
    value = piVar2[4];
    this_00 = *(void **)this;
    bVar3 = Serializer_appendInteger(this_00,piVar2[3]);
    uVar5 = extraout_var;
    if ((!bVar3) ||
       (bVar3 = Serializer_appendInteger(this_00,value), uVar5 = extraout_var_00, !bVar3)) break;
    FUN_004d21f9();
  }
  return (uint)uVar5 << 8;
}

