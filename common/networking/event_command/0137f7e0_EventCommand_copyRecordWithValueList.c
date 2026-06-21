// addr: 0x0137f7e0
// name: EventCommand_copyRecordWithValueList
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_copyRecordWithValueList(void * this, uint field0_, uint
   field4_, uint field8_, void * valueList, bool flag_) */

void * __thiscall
EventCommand_copyRecordWithValueList
          (void *this,uint field0_,uint field4_,uint field8_,void *valueList,bool flag_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small record by copying three scalar fields, copying a nested
                       value-list structure, and storing two boolean flags at offsets 0x1c/0x1d.
                       Evidence is the call to sub_0137f700_copyStructWithValueList after writing
                       the first three fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016823eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)this = field0_;
  *(uint *)((int)this + 4) = field4_;
  *(uint *)((int)this + 8) = field8_;
  sub_0137f700_copyStructWithValueList(valueList);
  *(bool *)((int)this + 0x1c) = flag_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  ExceptionList = local_c;
  return this;
}

