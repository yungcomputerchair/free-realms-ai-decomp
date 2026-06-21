// addr: 0x007ddad0
// name: ActorLightEmitter_createForCurrentActor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * ActorLightEmitter_createForCurrentActor(void) */

void * ActorLightEmitter_createForCurrentActor(void)

{
  int extraout_EAX;
  void *pvVar1;
  void *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Gets the current actor/effect context, allocates and constructs
                       ActorLightEmitter, then initializes it with the matching emitter setup
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01562b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  releaseMemberInterface(in_ECX);
  if ((extraout_EAX != 0) && (*(char *)(extraout_EAX + 0x22d) != '\0')) {
    pvVar1 = Mem_Alloc(0xb0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = ActorLightEmitter_ctor(pvVar1,*(void **)(extraout_EAX + 0x360));
    }
    local_4 = 0xffffffff;
    FUN_007c0aa0();
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

