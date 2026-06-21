// addr: 0x01356e30
// name: STLMap_intBlob_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLMap_intBlob_serialize(void * serializer, void * map) */

bool __thiscall STLMap_intBlob_serialize(void *this,void *serializer,void *map)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Serializes an STL map by starting a container, writing each node as an
                       int/blob pair, and advancing through the tree. Evidence is the
                       STLPair_intBlob_serialize callee and serializer container framing. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)serializer + 8),unaff_EDI);
  piVar1 = *(int **)((int)serializer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (serializer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar4 = Serialize_returnTrue();
      return SUB41(iVar4,0);
    }
    if (serializer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)serializer + 4)) {
      FUN_00d83c2d();
    }
    local_c = piVar2[3];
    local_8 = piVar2[4];
    local_4 = piVar2[5];
    bVar3 = STLPair_intBlob_serialize(*(void **)this,&local_c);
    if (!bVar3) break;
    FUN_0134f3a0();
  }
  return false;
}

