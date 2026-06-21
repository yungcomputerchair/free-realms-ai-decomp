// addr: 0x007ba900
// name: AnimationEvent_fireIfActive
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationEvent_fireIfActive(void * this, void * context) */

void __thiscall AnimationEvent_fireIfActive(void *this,void *context)

{
  char cVar1;
  ushort uVar2;
  
                    /* Checks virtual readiness/state bits on an animation event, marks the event as
                       fired in the high flag bits, increments its low counter, and invokes the
                       event callback. */
  cVar1 = (**(code **)(*(int *)this + 8))();
  if (cVar1 == '\0') {
    return;
  }
  if (((*(short *)((int)this + 0xc) < 0) ||
      (cVar1 = (**(code **)(*(int *)this + 4))(), cVar1 != '\0')) &&
     ((*(ushort *)((int)this + 0xc) >> 0xe & 1) != 0)) {
    return;
  }
  uVar2 = *(ushort *)((int)this + 0xc) | 0x4000;
  *(ushort *)((int)this + 0xc) = (uVar2 + 1 ^ uVar2) & 0x3fff ^ uVar2;
  (**(code **)(*(int *)this + 0x10))(context);
  return;
}

