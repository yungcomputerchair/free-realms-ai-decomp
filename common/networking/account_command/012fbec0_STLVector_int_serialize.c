// addr: 0x012fbec0
// name: STLVector_int_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLVector_int_serialize(void * this, int vector) */

int __thiscall STLVector_int_serialize(void *this,int vector)

{
  int *piVar1;
  int serializer;
  uint extraout_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
                    /* Serializes a vector of 32-bit integers by writing the count and each integer
                       element. */
  iVar2 = vector;
  if (*(int *)(vector + 4) == 0) {
    serializer = 0;
  }
  else {
    serializer = *(int *)(vector + 8) - *(int *)(vector + 4) >> 2;
  }
  Serializer_startAppendingSTLContainer(*(void **)this,serializer,unaff_EDI);
  piVar1 = *(int **)(iVar2 + 8);
  if (piVar1 < *(int **)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (*(int **)(iVar2 + 8) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    vector = *piVar3;
    SerializeDwordElement(*(void **)this,&vector);
    if ((char)extraout_EAX == '\0') {
      return extraout_EAX & 0xffffff00;
    }
    if (*(int **)(iVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  iVar2 = Serialize_returnTrue();
  return iVar2;
}

