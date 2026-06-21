// addr: 0x0138d7d0
// name: STLVector_intPair_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_intPair_serialize(void * this, int vector) */

int __thiscall STLVector_intPair_serialize(void *this,int vector)

{
  int *piVar1;
  int iVar2;
  uint extraout_EAX;
  int *piVar3;
  int unaff_EDI;
  int local_8;
  int local_4;
  
                    /* Serializes a vector of two-integer records by writing the count and then both
                       integers for each 8-byte element. */
  if (*(int *)(vector + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(vector + 8) - *(int *)(vector + 4) >> 3;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,iVar2,unaff_EDI);
  piVar1 = *(int **)(vector + 8);
  if (piVar1 < *(int **)(vector + 4)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)(vector + 4);
  if (*(int **)(vector + 8) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(vector + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    local_8 = *piVar3;
    local_4 = piVar3[1];
    SerializeDwordPairElement(*(void **)this,&local_8);
    if ((char)extraout_EAX == '\0') {
      return extraout_EAX & 0xffffff00;
    }
    if (*(int **)(vector + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 2;
  }
  iVar2 = Serialize_returnTrue();
  return iVar2;
}

