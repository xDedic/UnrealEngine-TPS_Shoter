#pragma once

// Convenient iterator
class AnimUtils
{
public:
	template <typename T>
	static T* FindNotifyByclass(UAnimSequenceBase* Animation)
	{
		if (!Animation) return nullptr;

		const auto NotifyEvents = Animation->Notifies;
		for (auto NotifyEvent : NotifyEvents)
		{
			auto AnimNotify = Cast<T>(NotifyEvent.Notify);
			if (AnimNotify)
			{
				return AnimNotify;
			}
		}
		return nullptr;
	}
};