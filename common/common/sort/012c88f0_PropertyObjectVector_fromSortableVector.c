// addr: 0x012c88f0
// name: PropertyObjectVector_fromSortableVector
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyObjectVector_fromSortableVector(void * destVector, void *
   sortableVector) */

void * __cdecl PropertyObjectVector_fromSortableVector(void *destVector,void *sortableVector)

{
  void **ppvVar1;
  int *piVar2;
  void **position;
  uint uVar3;
  int *piVar4;
  void *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a vector by walking sortable pointers and pushing either null or the
                       pointer adjusted by +4, converting Sortable wrappers to underlying property
                       objects. Evidence is the source-vector scan and PointerVector_insertOne
                       calls; it is used by ArchetypeDB filtering before converting sortables. */
  puStack_8 = &LAB_0166f029;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)destVector + 4) = 0;
  *(undefined4 *)((int)destVector + 8) = 0;
  *(undefined4 *)((int)destVector + 0xc) = 0;
  local_4 = 0;
  local_18 = *(int **)((int)sortableVector + 8);
  local_1c = 1;
  if (local_18 < *(int **)((int)sortableVector + 4)) {
    FUN_00d83c2d(uVar3);
  }
  piVar4 = *(int **)((int)sortableVector + 4);
  if (*(int **)((int)sortableVector + 8) < piVar4) {
    FUN_00d83c2d(uVar3);
  }
  while( true ) {
    if (sortableVector == (void *)0x0) {
      FUN_00d83c2d(uVar3);
    }
    if (piVar4 == local_18) break;
    if (sortableVector == (void *)0x0) {
      FUN_00d83c2d(uVar3);
    }
    if (*(int **)((int)sortableVector + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    if (*piVar4 == 0) {
      local_20 = (void *)0x0;
    }
    else {
      local_20 = (void *)(*piVar4 + 4);
    }
    ppvVar1 = *(void ***)((int)destVector + 4);
    if ((ppvVar1 == (void **)0x0) ||
       ((uint)(*(int *)((int)destVector + 0xc) - (int)ppvVar1 >> 2) <=
        (uint)(*(int *)((int)destVector + 8) - (int)ppvVar1 >> 2))) {
      position = *(void ***)((int)destVector + 8);
      if (position < ppvVar1) {
        FUN_00d83c2d();
      }
      PointerVector_insertOne(destVector,local_14,destVector,position,&local_20);
    }
    else {
      piVar2 = *(int **)((int)destVector + 8);
      *piVar2 = (int)local_20;
      *(int **)((int)destVector + 8) = piVar2 + 1;
    }
    if (*(int **)((int)sortableVector + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  ExceptionList = local_c;
  return destVector;
}

