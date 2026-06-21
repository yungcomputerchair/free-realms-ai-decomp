// addr: 0x0138fbc0
// name: STLMap_intTripleRecord_serialize_0138fbc0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intTripleRecord_serialize_0138fbc0(void * this, int map) */

int __thiscall STLMap_intTripleRecord_serialize_0138fbc0(void *this,int map)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Serializes a second instantiation of a map-like container with three integer
                       fields per node. */
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
    local_c = piVar2[3];
    local_8 = piVar2[4];
    local_4 = piVar2[5];
    uVar3 = SerializeDwordTripleElement(*(void **)this,&local_c);
    if ((char)uVar3 == '\0') break;
    FUN_0138cd80();
  }
  return uVar3 & 0xffffff00;
}

