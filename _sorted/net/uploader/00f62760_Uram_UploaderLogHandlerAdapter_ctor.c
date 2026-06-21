// addr: 0x00f62760
// name: Uram_UploaderLogHandlerAdapter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Uram_UploaderLogHandlerAdapter_ctor(void * this) */

void __fastcall Uram_UploaderLogHandlerAdapter_ctor(void *this)

{
                    /* Constructs a Uram::UploaderLogHandlerAdapter, installing
                       Smart::ReportHandler/Uram adapter vtables and initializing its
                       function-object deque and IString fields. The vtable symbols directly
                       identify the class. */
  *(undefined ***)((int)this + 4) = Smart::ReportHandler::vftable;
  *(undefined ***)this = Uram::UploaderLogHandlerAdapter::vftable;
  *(undefined ***)((int)this + 4) = Uram::UploaderLogHandlerAdapter::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)((int)this + 0x18) = SoeUtil::Deque<Uram::FunctionObject*,256>::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined ***)((int)this + 0x1c) = SoeUtil::Array<Uram::FunctionObject**,4,1>::vftable;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x4c) = SoeUtil::IString<char>::vftable;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined **)((int)this + 0x50) = &DAT_01cb4048;
  *(undefined ***)((int)this + 0x5c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x60) = &DAT_01cb4048;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  return;
}

