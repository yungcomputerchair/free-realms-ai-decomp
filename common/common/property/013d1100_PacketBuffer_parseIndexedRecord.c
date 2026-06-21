// addr: 0x013d1100
// name: PacketBuffer_parseIndexedRecord
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PacketBuffer_parseIndexedRecord(void * this, int index) */

int __thiscall PacketBuffer_parseIndexedRecord(void *this,int index)

{
  void *data;
  char cVar1;
  uint size;
  int iVar2;
  int iVar3;
  void *buffer;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = index;
                    /* For a valid index into a vector of string/blob records, initializes a packet
                       buffer from the selected record's bytes, parses it with FUN_013d1010 into a
                       local integer, and returns the parsed value or 0 on failure. Evidence is
                       PacketBuffer_init, RawBuffer_assign/free, and bounds checks against a
                       0x1c-byte record vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168af68;
  local_c = ExceptionList;
  size = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (-1 < index) {
    iVar2 = 0;
    if (*(int *)((int)this + 0xfc) != 0) {
      iVar2 = (*(int *)((int)this + 0x100) - *(int *)((int)this + 0xfc)) / 0x1c;
    }
    if (index < iVar2) {
      PacketBuffer_init(local_20);
      local_4 = 0;
      iVar2 = FUN_012ec330(iVar3);
      data = *(void **)(iVar2 + 0x14);
      iVar3 = FUN_012ec330(iVar3);
      if (*(uint *)(iVar3 + 0x18) < 0x10) {
        buffer = (void *)(iVar3 + 4);
      }
      else {
        buffer = *(void **)(iVar3 + 4);
      }
      RawBuffer_assign(local_20,buffer,data,size);
      index = 0;
      cVar1 = FUN_013d1010(local_20,&index);
      if (cVar1 != '\0') {
        local_4 = 0xffffffff;
        RawBuffer_free(local_20);
        ExceptionList = local_c;
        return index;
      }
      local_4 = 0xffffffff;
      RawBuffer_free(local_20);
    }
  }
  ExceptionList = local_c;
  return 0;
}

