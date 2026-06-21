// addr: 0x01470db0
// name: StateMachineState_setDeferredStatePending
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_setDeferredStatePending(void * this, bool pending_) */

void __thiscall StateMachineState_setDeferredStatePending(void *this,bool pending_)

{
                    /* Stores a byte flag at offset +0xfc. It is called immediately after setting
                       the +0xf8 deferred state id in phase advancement code. */
  *(bool *)((int)this + 0xfc) = pending_;
  return;
}

