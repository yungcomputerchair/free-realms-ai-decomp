// addr: 0x014b4480
// name: MatchCommand_SetBid_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBid_dump(void * this, void * stream) */

void __thiscall MatchCommand_SetBid_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for MatchCommand_SetBid, including the Bid
                       field. Evidence is the Starting/Ending MatchCommand_SetBid strings and Bid
                       label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SetBid\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Bid: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending MatchCommand_SetBid\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

