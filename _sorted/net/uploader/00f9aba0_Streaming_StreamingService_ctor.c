// addr: 0x00f9aba0
// name: Streaming_StreamingService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Streaming_StreamingService_ctor(void * this) */

void * __fastcall Streaming_StreamingService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Streaming::StreamingService after its base/helper initializer and
                       installs Streaming::StreamingService::vftable. Evidence is the vtable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Streaming_StreamingServiceBase_ctor(this);
  *(undefined ***)this = Streaming::StreamingService::vftable;
  ExceptionList = local_c;
  return this;
}

