// addr: 0x00d363a0
// name: TimedRange_dispatchIfEnabled
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int TimedRange_dispatchIfEnabled(void * owner, float * range) */

int __thiscall TimedRange_dispatchIfEnabled(void *this,void *owner,float *range)

{
  int extraout_EAX;
  float unaff_retaddr;
  
                    /* If the owner has a non-null enable/member at offset 0x1c, dispatches the
                       range start/end values to the underlying timed-range handler. */
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    TimedRange_dispatchFrameSpan
              (*(void **)((int)this + 0x1c),*(void **)owner,*(float *)((int)owner + 8),unaff_retaddr
              );
    return extraout_EAX;
  }
  return 0;
}

