// addr: 0x00a12820
// name: FUN_00a12820
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00a12820(void)

{
                    /* Thin forwarding wrapper that just calls FUN_00c8df70 and returns. Called by
                       SelfObject_ParseFromBlob, but the target is unnamed here so the wrapper
                       semantics are not identifiable. */
  FUN_00c8df70();
  return;
}

