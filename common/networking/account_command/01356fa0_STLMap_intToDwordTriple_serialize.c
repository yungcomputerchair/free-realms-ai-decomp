// addr: 0x01356fa0
// name: STLMap_intToDwordTriple_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToDwordTriple_serialize(void * writer, int map) */

int __thiscall STLMap_intToDwordTriple_serialize(void *this,void *writer,int map)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  int unaff_EDI;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Serializes a map-like container whose elements are four dwords, writing the
                       count and each key plus three dword fields. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)writer + 8),unaff_EDI);
  piVar1 = *(int **)((int)writer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar4 = Serialize_returnTrue();
      return iVar4;
    }
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)writer + 4)) {
      FUN_00d83c2d();
    }
    local_10 = piVar2[3];
    local_c = piVar2[4];
    local_8 = piVar2[5];
    local_4 = piVar2[6];
    bVar3 = STLPair_intDwordTriple_serialize(*(void **)this,&local_10);
    if (!bVar3) break;
    FUN_0134b9f0();
  }
  return (uint)extraout_var << 8;
}

