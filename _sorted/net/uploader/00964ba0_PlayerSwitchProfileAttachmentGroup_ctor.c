// addr: 0x00964ba0
// name: PlayerSwitchProfileAttachmentGroup_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerSwitchProfileAttachmentGroup_ctor(void * this, void * player,
   void * profile, void * attachmentGroup, uint a5_, uint a6_, uint a7_, uint a8_, uint groupId_,
   uint flags_) */

void * __thiscall
PlayerSwitchProfileAttachmentGroup_ctor
          (void *this,void *player,void *profile,void *attachmentGroup,uint a5_,uint a6_,uint a7_,
          uint a8_,uint groupId_,uint flags_)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayerSwitchProfileAttachmentGroup via a larger base constructor,
                       adjusts an attachment-group pointer to its +0x54 subobject, and stores
                       group/flag fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01596368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (attachmentGroup == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)attachmentGroup + 0x54;
  }
  FUN_00bf6d60(player,profile,iVar1,0,a5_,a6_,a7_,a8_);
  *(undefined ***)this = PlayerSwitchProfileAttachmentGroup::vftable;
  *(uint *)((int)this + 0x18c) = groupId_;
  *(undefined4 *)((int)this + 400) = 0;
  *(uint *)((int)this + 0x194) = flags_;
  ExceptionList = local_c;
  return this;
}

