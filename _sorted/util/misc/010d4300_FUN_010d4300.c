// addr: 0x010d4300
// name: FUN_010d4300
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_istring_hash_record(undefined4 * record, undefined4 id_) */

void __thiscall init_istring_hash_record(void *this,undefined4 *record,undefined4 id_)

{
                    /* Initializes a record containing a SoeUtil::IString<unsigned_short> member and
                       clears hash/list fields. Exact owner class is not evident. */
  *(undefined4 **)this = record;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined ***)((int)this + 8) = SoeUtil::IString<unsigned_short>::vftable;
  *(undefined **)((int)this + 0xc) = &DAT_01cb96e4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return;
}

