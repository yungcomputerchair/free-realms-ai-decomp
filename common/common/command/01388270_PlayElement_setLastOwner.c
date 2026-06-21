// addr: 0x01388270
// name: PlayElement_setLastOwner
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setLastOwner(void * this) */

void PlayElement_setLastOwner(void *this)

{
  undefined4 uVar1;
  void *pvVar2;
  int unaff_ESI;
  int unaff_EDI;
  
                    /* Stores an element id into property 0x2d, or clears it to zero when the source
                       element is null. In discard/move flows this matches the Last Owner
                       bookkeeping messages. */
  if (this != (void *)0x0) {
    uVar1 = PlayElement_getId();
    this = (void *)0x2d;
    pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&this,unaff_EDI);
    FUN_01300680(2);
    *(undefined4 *)((int)pvVar2 + 8) = uVar1;
    return;
  }
  this = (void *)0x2d;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&this,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  return;
}

