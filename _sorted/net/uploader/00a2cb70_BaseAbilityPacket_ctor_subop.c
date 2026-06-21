// addr: 0x00a2cb70
// name: BaseAbilityPacket_ctor_subop
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseAbilityPacket_ctor_subop(void * this, uint subop_) */

void __thiscall BaseAbilityPacket_ctor_subop(void *this,uint subop_)

{
                    /* Constructs a BaseAbilityPacket by initializing BasePacket opcode 0x24 and
                       storing the ability suboperation. */
  *(undefined ***)this = BasePacket::vftable;
  *(undefined4 *)((int)this + 4) = 0x24;
  *(undefined ***)this = BaseAbilityPacket::vftable;
  *(uint *)((int)this + 8) = subop_;
  return;
}

