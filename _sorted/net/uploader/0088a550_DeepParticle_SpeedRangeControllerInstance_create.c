// addr: 0x0088a550
// name: DeepParticle_SpeedRangeControllerInstance_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_SpeedRangeControllerInstance_create(void * controller,
   void * system) */

void * DeepParticle_SpeedRangeControllerInstance_create(void *controller,void *system)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeepParticle::SpeedRangeControllerInstance. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157845b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepParticle_SpeedRangeControllerInstance_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

