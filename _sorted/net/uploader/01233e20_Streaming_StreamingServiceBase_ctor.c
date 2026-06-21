// addr: 0x01233e20
// name: Streaming_StreamingServiceBase_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Streaming_StreamingServiceBase_ctor(void * this) */

void * __fastcall Streaming_StreamingServiceBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Streaming_StreamingServiceBase object: installs the class
                       vtable/base state and initializes owned fields. It initializes a base
                       streaming service and an embedded associative container. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01651cd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01230d10(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = Streaming::StreamingServiceBase::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_01233d00();
  ExceptionList = local_c;
  return this;
}

