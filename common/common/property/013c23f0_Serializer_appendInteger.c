// addr: 0x013c23f0
// name: Serializer_appendInteger
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Serializer_appendInteger(void * this, uint value) */

bool __thiscall Serializer_appendInteger(void *this,uint value)

{
  int iVar1;
  uint uVar2;
  undefined1 *data;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  byte local_c [8];
  uint local_4;
  
                    /* Appends an integer to a Serializer, using a compact variable-length encoding
                       unless the global compatibility flag requests fixed endian-swapped 32-bit
                       output. It asserts the serializer is in append state. */
  local_4 = DAT_01b839d8 ^ (uint)local_c;
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 2;
  }
  if (*(int *)((int)this + 0x10) != 2) {
    FUN_012f5dc0("Wrong state in appendInteger %d",*(int *)((int)this + 0x10));
  }
  if (DAT_01cbdd7c == '\0') {
    uVar2 = ~value;
    uVar3 = value;
    if (uVar2 < value) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 >> 4;
    for (data = (undefined1 *)0x1; (uVar4 != 0 && (data <= &DAT_00000004)); data = data + 1) {
      local_c[(int)data] = (byte)uVar4;
      uVar4 = uVar4 >> 8;
    }
    local_c[0] = (byte)uVar3 & 0xf | (((char)data + -1) * '\x02' + (uVar2 < value)) * '\x10';
    iVar1 = GrowableBuffer_append(this,local_c,data,unaff_ESI);
    return SUB41(iVar1,0);
  }
  Ordinal_8();
  iVar1 = GrowableBuffer_append(this,&stack0xfffffff0,&DAT_00000004,value);
  return SUB41(iVar1,0);
}

