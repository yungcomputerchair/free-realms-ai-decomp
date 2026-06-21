// addr: 0x01351620
// name: STLMap_dwordPair_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLMap_dwordPair_serialize(void * serializer, void * map) */

bool __thiscall STLMap_dwordPair_serialize(void *this,void *serializer,void *map)

{
  int *piVar1;
  int *piVar2;
  char extraout_AL;
  int iVar3;
  int unaff_EDI;
  int local_10;
  undefined4 local_c;
  
                    /* Serializes an STL map by starting a container with its size, writing each
                       node as a pair of two dwords, and advancing the tree iterator until the
                       sentinel. Evidence is SerializeDwordPairElement and
                       Serializer_startAppendingSTLContainer. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)serializer + 8),unaff_EDI);
  piVar1 = *(int **)((int)serializer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (serializer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar3 = Serialize_returnTrue();
      return SUB41(iVar3,0);
    }
    if (serializer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)serializer + 4)) {
      FUN_00d83c2d();
    }
    local_10 = piVar2[3];
    local_c = piVar2[4];
    SerializeDwordPairElement(*(void **)this,&local_10);
    if (extraout_AL == '\0') break;
    FUN_004d21f9();
  }
  return false;
}

