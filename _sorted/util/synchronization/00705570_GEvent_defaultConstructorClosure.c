// addr: 0x00705570
// name: GEvent_defaultConstructorClosure
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GEvent_defaultConstructorClosure(void * this) */

void __thiscall GEvent::GEvent_defaultConstructorClosure(GEvent *this)

{
                    /* Default-constructor closure for GEvent that forwards to the GEvent
                       constructor with a zero/manual-reset flag. The decompiler comment explicitly
                       names GEvent::`default constructor closure'. */
  GEvent_ctor(this,'\0');
  return;
}

