// addr: 0x007840d0
// name: ActorEffectManager_createOrAttachCompositeEffectEmitter
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ActorCompositeEffectEmitter_create_or_attach(void * manager, void *
   descriptor, int id_, bool attachOnly_) */

int __thiscall
ActorEffectManager_createOrAttachCompositeEffectEmitter
          (void *this,void *manager,void *descriptor,int id_,bool attachOnly_)

{
  char cVar1;
  void *this_00;
  int *piVar2;
  int iStack_e0;
  undefined1 auStack_d0 [152];
  undefined1 uStack_38;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Validates an effect/emitter descriptor, allocates an
                       ActorCompositeEffectEmitter when needed, attaches it to manager lists, and
                       starts it via its virtual method. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_015598a9;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (manager != (void *)0x0) {
    cVar1 = (**(code **)(*(int *)manager + 8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)manager + 0x10))();
      if ((cVar1 == '\0') && ((char)id_ != '\0')) {
        ActorCompositeEffectEmitter_ctor(auStack_d0,*(void **)((int)this + 0x360));
        uStack_14 = 1;
        FUN_007c2c10();
        uStack_38 = 1;
        FUN_007c2ab0();
        uStack_14 = 0xffffffff;
        FUN_007c2b60();
        ExceptionList = local_1c;
        return 0;
      }
      if ((int)descriptor < 1) {
        *(int *)((int)this + 0x56c) = *(int *)((int)this + 0x56c) + 1;
      }
      this_00 = Mem_Alloc(0xb0);
      uStack_14 = 0;
      if (this_00 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = ActorCompositeEffectEmitter_ctor(this_00,*(void **)((int)this + 0x360));
      }
      uStack_14 = 0xffffffff;
      FUN_007c2c10();
      FUN_0077cf80();
      FUN_00772270();
      (**(code **)(*piVar2 + 4))();
      ExceptionList = pvStack_20;
      return iStack_e0;
    }
  }
  ExceptionList = local_1c;
  return -1;
}

