// addr: 0x00a12780
// name: FUN_00a12780
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00a12780(void)

{
                    /* Thin forwarding wrapper that just calls FUN_00c8bdf0 and returns. Called by
                       SelfObject_ParseFromBlob, but the target is unnamed here so the wrapper
                       semantics are not identifiable. */
  FUN_00c8bdf0();
  return;
}

