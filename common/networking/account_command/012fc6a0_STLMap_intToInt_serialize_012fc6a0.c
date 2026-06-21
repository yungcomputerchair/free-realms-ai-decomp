// addr: 0x012fc6a0
// name: STLMap_intToInt_serialize_012fc6a0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToInt_serialize_012fc6a0(void * writer, int map) */

int __thiscall STLMap_intToInt_serialize_012fc6a0(void *this,void *writer,int map)

{
  int *piVar1;
  int *piVar2;
  uint extraout_EAX;
  int iVar3;
  int unaff_EDI;
  int local_10;
  undefined4 local_c;
  
                    /* Serializes an STL map-like container of integer pairs by writing count and
                       each key/value dword pair. */
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
    local_c = piVar2[4];
    SerializeDwordPairElement(*(void **)this,&local_10);
    if ((char)extraout_EAX == '\0') break;
    FUN_004d21f9();
  }
  return extraout_EAX & 0xffffff00;
}

