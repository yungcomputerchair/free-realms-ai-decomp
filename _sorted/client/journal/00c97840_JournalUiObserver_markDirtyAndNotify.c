// addr: 0x00c97840
// name: JournalUiObserver_markDirtyAndNotify
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void JournalUiObserver_markDirtyAndNotify(void * this) */

void __fastcall JournalUiObserver_markDirtyAndNotify(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* Clears a dirty/ready byte on an observer-like object and dispatches its vfunc
                       at offset 0x10; called after journal track changes to refresh listeners. */
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)this + 0x10);
  *(undefined1 *)((int)this + 0x25c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c9784c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

