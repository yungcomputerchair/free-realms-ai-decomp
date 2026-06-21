// addr: 0x00d8e92c
// name: CRT_unlock_stream_entry_thunk
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_unlock_stream_entry_thunk(void) */

void CRT_unlock_stream_entry_thunk(void)

{
                    /* Tiny CRT cleanup thunk that calls the stream-entry unlock helper after flsall
                       processes a FILE entry. Evidence is its sole call from flsall immediately
                       after per-stream flushing. */
  FUN_00d8e3ed();
  return;
}

