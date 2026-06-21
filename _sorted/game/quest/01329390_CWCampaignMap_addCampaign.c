// addr: 0x01329390
// name: CWCampaignMap_addCampaign
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void CWCampaignMap_addCampaign(void * this, void * version, void * title, int
   campaignId_, void * imageName, void * opponentNameKey) */

void __thiscall
CWCampaignMap_addCampaign
          (void *this,void *version,void *title,int campaignId_,void *imageName,
          void *opponentNameKey)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  void *in_stack_00000024;
  undefined4 uStack00000034;
  uint in_stack_00000038;
  int in_stack_0000003c;
  void *in_stack_00000044;
  undefined4 uStack00000054;
  uint in_stack_00000058;
  void *in_stack_00000060;
  uint in_stack_00000074;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_84 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [28];
  int local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Adds or updates a campaign record in the CWCampaignMap by copying four string
                       fields and an integer campaign id into the map entry. Caller 01329630
                       repeatedly passes literals such as 'TW 1.01', 'Cruisin for a Bruisin',
                       'campaignImage_101', and 'Tcg_Opponent.name101'. */
  puStack_8 = &LAB_01679d2b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_84;
  ExceptionList = &local_c;
  local_4 = 3;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  CWCampaignRecord_ctorDefault(local_84);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_84,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&version,0,0xffffffff);
  local_4c = in_stack_0000003c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&stack0x00000020,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&stack0x00000040,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&stack0x0000005c,0,0xffffffff);
  this_00 = CWCampaignMap_getOrCreateCampaign((void *)((int)this + 8),&stack0x0000003c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )local_84,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00 + 0x1c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_68,0,0xffffffff);
  *(int *)(this_00 + 0x38) = local_4c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00 + 0x3c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_48,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00 + 0x58,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_2c,0,0xffffffff);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  local_4._0_1_ = 3;
  CWCampaignRecord_dtor(local_84);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(title);
  }
  in_stack_0000001c = 0xf;
  uStack00000018 = 0;
  title = (void *)((uint)title & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  in_stack_00000038 = 0xf;
  uStack00000034 = 0;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000044);
  }
  in_stack_00000058 = 0xf;
  uStack00000054 = 0;
  in_stack_00000044 = (void *)((uint)in_stack_00000044 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < in_stack_00000074) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000060);
  }
  ExceptionList = local_c;
  return;
}

