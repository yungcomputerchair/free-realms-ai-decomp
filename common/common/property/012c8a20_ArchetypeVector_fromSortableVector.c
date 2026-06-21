// addr: 0x012c8a20
// name: ArchetypeVector_fromSortableVector
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ArchetypeVector_fromSortableVector(void *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint container;
  uint value;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output vector and fills it by dynamic-casting each Sortable
                       pointer from the input vector to Archetype before appending. The output
                       vector grows through the UIntVector_insertOne helper when needed. */
  puStack_8 = &LAB_0166f069;
  local_c = ExceptionList;
  value = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  local_4 = 0;
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 < *(undefined4 **)(param_2 + 4)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)(param_2 + 4);
  if (*(undefined4 **)(param_2 + 8) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    local_18 = FUN_00d8d382(*puVar4,0,&Sortable::RTTI_Type_Descriptor,
                            &Archetype::RTTI_Type_Descriptor,0);
    uVar2 = *(uint *)((int)param_1 + 4);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)param_1 + 0xc) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)param_1 + 8) - uVar2) >> 2))) {
      container = *(uint *)((int)param_1 + 8);
      if (container < uVar2) {
        FUN_00d83c2d();
      }
      UIntVector_insertOne(param_1,local_14,param_1,container,(int)&local_18,value);
    }
    else {
      puVar3 = *(undefined4 **)((int)param_1 + 8);
      *puVar3 = local_18;
      *(undefined4 **)((int)param_1 + 8) = puVar3 + 1;
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

