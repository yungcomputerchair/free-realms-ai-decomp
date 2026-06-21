// addr: 0x00888420
// name: DeepParticle_OffsetWaveControllerInstance_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepParticle_OffsetWaveControllerInstance_create(void * controller,
   void * system) */

void * DeepParticle_OffsetWaveControllerInstance_create(void *controller,void *system)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeepParticle::OffsetWaveControllerInstance. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01577ebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepParticle_OffsetWaveControllerInstance_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

