// addr: 0x007e7170
// name: AnimVisibilityController_appendReference
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall AnimVisibilityController_appendReference(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int capacity_;
  
                    /* Appends a reference pointer to the visibility controller dynamic array,
                       growing capacity first if required. */
  capacity_ = *(int *)((int)param_1 + 8) + 1;
  if (*(int *)((int)param_1 + 0xc) < capacity_) {
    AnimVisibilityController_reserveReferenceArray(param_1,capacity_,(void *)0x0);
  }
  puVar1 = (undefined4 *)(*(int *)((int)param_1 + 4) + *(int *)((int)param_1 + 8) * 4);
  *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

