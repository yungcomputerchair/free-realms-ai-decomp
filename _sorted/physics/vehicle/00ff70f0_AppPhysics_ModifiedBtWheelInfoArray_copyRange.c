// addr: 0x00ff70f0
// name: AppPhysics_ModifiedBtWheelInfoArray_copyRange
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_ModifiedBtWheelInfoArray_copyRange(void * array, int first_,
   int last_, void * source) */

void __thiscall
AppPhysics_ModifiedBtWheelInfoArray_copyRange
          (void *this,void *array,int first_,int last_,void *source)

{
  void *this_00;
  void **ppvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies a range of 400-byte ModifiedBtWheelInfo records into the array storage
                       using the wheel-info copy helper for each element. */
  puStack_8 = &LAB_0163112a;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar1, (int)array < first_; array = (void *)((int)array + 1)) {
    this_00 = (void *)((int)array * 400 + last_);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      AppPhysics_ModifiedBtWheelInfo_copyFrom
                (this_00,(void *)(*(int *)((int)this + 0xc) + (int)array * 400));
    }
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_c;
  return;
}

