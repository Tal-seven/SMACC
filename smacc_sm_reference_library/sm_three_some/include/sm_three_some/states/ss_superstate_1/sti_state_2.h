namespace sm_three_some
{
namespace ss1_states
{
struct StiState2 : smacc::SmaccState<StiState2, SS>
{
  using SmaccState::SmaccState;

  typedef mpl::list<
      smacc::Transition<EvTimer<CbTimer, OrTimer>, StiState3>,

      smacc::Transition<EvKeyPressN<CbDefaultKeyboardBehavior, OrKeyboard>, StiState3>,
      smacc::Transition<EvKeyPressP<CbDefaultKeyboardBehavior, OrKeyboard>, StiState1>>
      reactions;

  //-------------------------------------------------------------------------------
  static void onDefinition()
  {
    static_configure<OrTimer, CbTimer>();
    static_configure<OrSubscriber, CbWatchdogSubscriberBehavior>();
    static_configure<OrUpdatablePublisher, CbDefaultPublishLoop>();
    static_configure<OrKeyboard, CbDefaultKeyboardBehavior>();
  }

  //-------------------------------------------------------------------------------
  void onInitialize()
  {
  }
};
}
}