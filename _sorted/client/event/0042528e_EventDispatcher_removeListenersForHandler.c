// addr: 0x0042528e
// name: EventDispatcher_removeListenersForHandler
// subsystem: common/client/event
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EventDispatcher_removeListenersForHandler(void * this, void * handler) */

bool __thiscall EventDispatcher_removeListenersForHandler(void *this,void *handler)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [16];
  
                    /* Removes every event-listener record whose ref-counted handler/listener
                       pointer at record offset +4 matches the supplied object. */
  uVar4 = 0;
  iVar1 = FUN_0040a545();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_0040a57c(uVar4);
      if (*(void **)(iVar1 + 4) == handler) {
        FUN_00416edb(*(undefined4 *)((int)this + 0x1e4),(int)this + 0x1e0);
        puVar2 = (undefined4 *)FUN_0041b9fa(local_14,uVar4);
        FUN_00423270(local_1c,*puVar2,puVar2[1]);
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_0040a545();
    } while (uVar4 < uVar3);
  }
  return true;
}

