// addr: 0x0123a580
// name: PropertyManager_scheduleRefresh
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyManager_scheduleRefresh(void * self, int delayMs) */

void __thiscall PropertyManager_scheduleRefresh(void *this,void *self,int delayMs)

{
  void *value;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Normalizes invalid or too-small positive delays to 0x3d5a, asks a
                       scheduler/factory at offset 0x34 to create a handle, stores it at offset
                       0x30, then records the delay/handle pair. Exact class is not evident. */
  if ((((int)self < 15000) && (0 < (int)self)) || ((int)self < 0)) {
    self = (void *)0x3d5a;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    value = self;
    local_c = (**(code **)(**(int **)((int)this + 0x34) + 0x10))();
    *(undefined4 *)((int)this + 0x30) = local_c;
    local_10 = self;
    local_8 = local_c;
    StdRbTree_insertValueMaybeRebalance((void *)((int)this + 0x38),&local_10,value);
  }
  return;
}

