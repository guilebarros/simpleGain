#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"


class SimpleGainAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                        public juce::Slider::Listener
{
public:
    SimpleGainAudioProcessorEditor (SimpleGainAudioProcessor&);
    ~SimpleGainAudioProcessorEditor() override;

    
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void sliderValueChanged (juce::Slider* slider) override;

private:
    
    juce::Slider gainSlider;


    SimpleGainAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleGainAudioProcessorEditor)
};
