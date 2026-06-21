// addr: 0x00a57d30
// name: FUN_00a57d30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00a57d30(void * object) */

void __fastcall FUN_00a57d30(void *object)

{
  void *unaff_ESI;
  
                    /* Cleans or resets two subobjects at offsets 0x434 and 0x428 using the same
                       helper. No class evidence is present. */
  removeFirstQueuedNodeAndReleasePayload(object,(void *)((int)object + 0x434),unaff_ESI);
  removeFirstQueuedNodeAndReleasePayload(object,(void *)((int)object + 0x428),unaff_ESI);
  return;
}

