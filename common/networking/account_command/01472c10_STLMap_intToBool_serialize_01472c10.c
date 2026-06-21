// addr: 0x01472c10
// name: STLMap_intToBool_serialize_01472c10
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToBool_serialize_01472c10(void * writer, int map) */

int __thiscall STLMap_intToBool_serialize_01472c10(void *this,void *writer,int map)

{
  int *piVar1;
  int *piVar2;
  uint extraout_EAX;
  int iVar3;
  int unaff_EDI;
  int local_10;
  uint local_c;
  
                    /* Serializes a map from integer keys to byte/boolean values, widening the byte
                       into a pair structure before writing. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)writer + 8),unaff_EDI);
  piVar1 = *(int **)((int)writer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar3 = Serialize_returnTrue();
      return iVar3;
    }
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)writer + 4)) {
      FUN_00d83c2d();
    }
    local_10 = piVar2[3];
    local_c = (uint)*(byte *)(piVar2 + 4);
    SerializeDwordPairElement(*(void **)this,&local_10);
    if ((char)extraout_EAX == '\0') break;
    FUN_01298330();
  }
  return extraout_EAX & 0xffffff00;
}

