// addr: 0x01356ef0
// name: STLMap_intToBool_serialize_01356ef0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToBool_serialize_01356ef0(void * writer, int map) */

int __thiscall STLMap_intToBool_serialize_01356ef0(void *this,void *writer,int map)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  void *unaff_EDI;
  undefined4 local_10;
  undefined1 local_c;
  
                    /* Serializes a map from integer keys to boolean/byte values by writing count
                       and key/value pairs. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)writer + 8),(int)unaff_EDI);
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
    local_c = *(undefined1 *)(piVar2 + 4);
    bVar3 = STLPair_intBool_serialize(*(void **)this,&local_10,unaff_EDI);
    if (!bVar3) break;
    FUN_01298330();
  }
  return (uint)extraout_var << 8;
}

