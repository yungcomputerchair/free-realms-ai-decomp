// addr: 0x008cf550
// name: AcquaintanceData_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AcquaintanceData_ctor(void * this) */

void __fastcall AcquaintanceData_ctor(void *this)

{
                    /* Initializes an acquaintance/friend-like record with default IDs, an
                       SoeUtil::IString, zero counters, and a bool flag. It is called by
                       BaseAcquaintancePacket_handler and SelfObject_ParseFromBlob. */
  *(undefined4 *)this = DAT_01be4850;
  *(undefined4 *)((int)this + 4) = DAT_01be4854;
  *(undefined ***)((int)this + 8) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)((int)this + 0xc) = &DAT_01be48fc;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = DAT_01be48b8;
  *(undefined4 *)((int)this + 0x24) = DAT_01be48bc;
  *(undefined1 *)((int)this + 0x28) = 0;
  return;
}

